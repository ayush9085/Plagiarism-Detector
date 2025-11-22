#ifndef REPORT_GENERATOR_H
#define REPORT_GENERATOR_H

/*
    report_generator.c handles creation of plagiarism_report.txt.
    
    Workflow:
      report_open(path)           → open file (overwrite mode)
      report_add_pair(...)        → add pairwise result to the report
      report_close()              → close file safely
*/

/* 
   Opens the report file in write mode.
   Returns 1 on success, 0 on failure.
*/
int report_open(const char *path);

/*
   Adds one pair of comparison results to the open report.

   file1, file2  → paths of compared files
   percent       → similarity percentage (e.g., 42.35)
   method_name   → "Jaccard" or "Cosine"
*/
void report_add_pair(const char *file1,
                     const char *file2,
                     double percent,
                     const char *method_name);

/* 
   Closes the report file.
   Safe to call even if file was not opened.
*/
void report_close(void);

#endif /* REPORT_GENERATOR_H */
