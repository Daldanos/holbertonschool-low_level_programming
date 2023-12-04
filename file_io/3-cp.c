#include "main.h"
#define BUF_SIZE 1024

/**
 * main - main function
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	FILE *sourceFile;
	FILE *destFile;
	char buf[BUF_SIZE];
	size_t bytesRead;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97); }
	sourceFile = fopen(argv[1], "r");
	if (!sourceFile)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	destFile = fopen(argv[2], "w");
	if (!destFile)
	{
		fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
		exit(99); }
	while ((bytesRead = fread(buf, 1, BUF_SIZE, sourceFile)) > 0)
	{
		if (fwrite(buf, 1, bytesRead, destFile) != bytesRead)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
			exit(99); } }
	if (ferror(sourceFile))
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	if (fclose(destFile) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(sourceFile));
		exit(100); }
	if (fclose(destFile) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileno(destFile));
		exit(100); }
	printf("Files copied successfully.\n");
	return (0);
}
