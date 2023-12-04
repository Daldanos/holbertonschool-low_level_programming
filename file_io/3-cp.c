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
	FILE *sourceFile = fopen(argv[1], "r");
	FILE *destFile = fopen(argv[2], "w");
	char buf[BUF_SIZE];
	size_t bytesRead;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	if (sourceFile == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	if (destFile == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		fclose(sourceFile);
		exit(99); }
	while ((bytesRead = fread(buf, 1, BUF_SIZE, sourceFile)) > 0)
	{
		if (fwrite(buf, 1, bytesRead, destFile) != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			fclose(sourceFile);
			fclose(destFile);
			exit(99); } }
	if (ferror(sourceFile))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		fclose(sourceFile);
		fclose(destFile);
		exit(98); }
	if (fclose(sourceFile) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(sourceFile));
		exit(100); }
	if (fclose(destFile) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(destFile));
		exit(100); }
	return (0);
}
