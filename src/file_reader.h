#ifndef FILE_READER_H
#define FILE_READER_H

/* Checks if a file exists and is readable.
   Returns 1 if OK, 0 if not. */
int file_exists_and_readable(const char *path);

/* Returns file size in bytes.
   Returns -1 on error. */
long file_size_bytes(const char *path);

/* Reads entire file into a malloc'd char buffer.
   Caller MUST free the returned buffer.
   Returns NULL on error or empty file. */
char *read_file_text(const char *path);

#endif
