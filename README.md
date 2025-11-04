# 🧠 Plagiarism Detector — C Mini Project

A **command-line plagiarism detection system** written in **C**, designed to analyze text documents and calculate similarity percentages using **Jaccard Index** and **Cosine Similarity**.
This project demonstrates modular programming, structured design, and efficient file handling — all built from scratch without external libraries.

---

## 🚀 Overview

Plagiarism in academics and content creation has become a serious issue due to the abundance of easily accessible online material.
This project provides an **automated way to detect textual similarity** between files using statistical and lexical analysis.

It can:

* Read multiple `.txt` files.
* Remove stop-words and punctuation.
* Tokenize words dynamically.
* Compute pairwise similarity between documents.
* Display real-time progress with color-coded output.
* Generate detailed reports.

---

## 🧩 Features

✅ Compare two or more text files
✅ Stop-word removal via external `stopwords.txt`
✅ Tokenization and normalization (case + punctuation handling)
✅ Dual similarity algorithms: **Jaccard Index** and **Cosine Similarity**
✅ Dynamic ASCII progress bar with color output
✅ Report generator (`plagiarism_report.txt`)
✅ Modular C architecture (functions, pointers, arrays, structures, and file handling)

---

## ⚙️ Tech Stack

| Component            | Technology                                                       |
| -------------------- | ---------------------------------------------------------------- |
| **Language**         | C (ANSI Standard)                                                |
| **Compiler**         | GCC / Turbo C / Code::Blocks / VS Code                           |
| **Algorithms**       | Jaccard Index, Cosine Similarity                                 |
| **Libraries Used**   | `<stdio.h>`, `<string.h>`, `<ctype.h>`, `<stdlib.h>`, `<math.h>` |
| **Output Format**    | Text-based CLI with ANSI colors                                  |
| **Operating System** | Windows / Linux / macOS                                          |

---

## 🧠 Project Modules

| Module                                | Description                                                                |
| ------------------------------------- | -------------------------------------------------------------------------- |
| **1️⃣ File Reader & Manager**         | Reads `.txt` files dynamically using file handling.                        |
| **2️⃣ Stop-word Handler**             | Removes common stop-words from text using `stopwords.txt`.                 |
| **3️⃣ Text Processor & Tokenizer**    | Converts text to lowercase, removes punctuation, and stores unique tokens. |
| **4️⃣ Similarity Computation Engine** | Implements Jaccard and Cosine algorithms to compute similarity scores.     |
| **5️⃣ Progress & Visualization**      | Displays real-time progress bar and color-coded similarity output.         |
| **6️⃣ Report Generator**              | Creates detailed report file `plagiarism_report.txt` summarizing results.  |
| **7️⃣ Menu Interface**                | User-friendly command-line menu for navigation and file selection.         |

---

## 🧮 Algorithm Summary

### 🔹 **Jaccard Similarity**

Measures the ratio of common unique words to total unique words:

```
J(A, B) = |A ∩ B| / |A ∪ B|
```

### 🔹 **Cosine Similarity**

Uses frequency vectors of words:

```
Cosine(A, B) = (A • B) / (||A|| * ||B||)
```

Both algorithms are implemented modularly, allowing the user to choose between them.

---

## 📁 Folder Structure

```
Plagiarism-Detector/
│
├── src/
│   ├── main.c
│   ├── file_reader.c
│   ├── tokenizer.c
│   ├── similarity.c
│   ├── report_generator.c
│   └── plagiarism.h
│
├── data/
│   ├── stopwords.txt
│   ├── essayA.txt
│   └── essayB.txt
│
├── output/
│   └── plagiarism_report.txt
│
├── README.md
└── .gitignore
```

---

## 🧰 How to Run the Project

### **1️⃣ Compile**

```bash
gcc src/main.c -o plagiarism
```

### **2️⃣ Run**

```bash
./plagiarism
```

### **3️⃣ Input**

When prompted, enter the names or paths of two text files:

```
Enter first file name: essayA.txt
Enter second file name: essayB.txt
```

### **4️⃣ Output**

```
Analyzing files...
[████████████████████░░░░░░] 85%
essayA.txt & essayB.txt → 78.5% (RED)
Report saved as plagiarism_report.txt
```

---

## 🧪 Sample Report

```
=============================
   PLAGIARISM REPORT
=============================
File Pair: essayA.txt & essayB.txt
Similarity (Cosine): 78.52%
Verdict: High Similarity
-----------------------------
File Pair: essayA.txt & essayC.txt
Similarity (Jaccard): 42.10%
Verdict: Low Similarity
=============================
```

---

## 💡 Future Enhancements

* GUI / Web interface for file upload
* Real-time highlighting of plagiarized sections
* Integration with Replit for online demo
* Support for PDF and DOCX file parsing
* Optimization using hash maps for token storage

---

## 👨‍💻 Author

**Ayush Pandey**
B.Tech CSE — School of Computer Science, UPES Dehradun
Faculty In-Charge: *Mr. Pankaj Badoni*

📧 *Contact:* [ayush.pandey@example.com](mailto:ayush.pandey@example.com)
🌐 *GitHub:* [@ayushpandey](# 🧠 Plagiarism Detector — C Mini Project

A **command-line plagiarism detection system** written in **C**, designed to analyze text documents and calculate similarity percentages using **Jaccard Index** and **Cosine Similarity**.
This project demonstrates modular programming, structured design, and efficient file handling — all built from scratch without external libraries.

---

## 🚀 Overview

Plagiarism in academics and content creation has become a serious issue due to the abundance of easily accessible online material.
This project provides an **automated way to detect textual similarity** between files using statistical and lexical analysis.

It can:

* Read multiple `.txt` files.
* Remove stop-words and punctuation.
* Tokenize words dynamically.
* Compute pairwise similarity between documents.
* Display real-time progress with color-coded output.
* Generate detailed reports.

---

## 🧩 Features

✅ Compare two or more text files
✅ Stop-word removal via external `stopwords.txt`
✅ Tokenization and normalization (case + punctuation handling)
✅ Dual similarity algorithms: **Jaccard Index** and **Cosine Similarity**
✅ Dynamic ASCII progress bar with color output
✅ Report generator (`plagiarism_report.txt`)
✅ Modular C architecture (functions, pointers, arrays, structures, and file handling)

---

## ⚙️ Tech Stack

| Component            | Technology                                                       |
| -------------------- | ---------------------------------------------------------------- |
| **Language**         | C (ANSI Standard)                                                |
| **Compiler**         | GCC / Turbo C / Code::Blocks / VS Code                           |
| **Algorithms**       | Jaccard Index, Cosine Similarity                                 |
| **Libraries Used**   | `<stdio.h>`, `<string.h>`, `<ctype.h>`, `<stdlib.h>`, `<math.h>` |
| **Output Format**    | Text-based CLI with ANSI colors                                  |
| **Operating System** | Windows / Linux / macOS                                          |

---

## 🧠 Project Modules

| Module                                | Description                                                                |
| ------------------------------------- | -------------------------------------------------------------------------- |
| **1️⃣ File Reader & Manager**         | Reads `.txt` files dynamically using file handling.                        |
| **2️⃣ Stop-word Handler**             | Removes common stop-words from text using `stopwords.txt`.                 |
| **3️⃣ Text Processor & Tokenizer**    | Converts text to lowercase, removes punctuation, and stores unique tokens. |
| **4️⃣ Similarity Computation Engine** | Implements Jaccard and Cosine algorithms to compute similarity scores.     |
| **5️⃣ Progress & Visualization**      | Displays real-time progress bar and color-coded similarity output.         |
| **6️⃣ Report Generator**              | Creates detailed report file `plagiarism_report.txt` summarizing results.  |
| **7️⃣ Menu Interface**                | User-friendly command-line menu for navigation and file selection.         |

---

## 🧮 Algorithm Summary

### 🔹 **Jaccard Similarity**

Measures the ratio of common unique words to total unique words:

```
J(A, B) = |A ∩ B| / |A ∪ B|
```

### 🔹 **Cosine Similarity**

Uses frequency vectors of words:

```
Cosine(A, B) = (A • B) / (||A|| * ||B||)
```

Both algorithms are implemented modularly, allowing the user to choose between them.

---

## 📁 Folder Structure

```
Plagiarism-Detector/
│
├── src/
│   ├── main.c
│   ├── file_reader.c
│   ├── tokenizer.c
│   ├── similarity.c
│   ├── report_generator.c
│   └── plagiarism.h
│
├── data/
│   ├── stopwords.txt
│   ├── essayA.txt
│   └── essayB.txt
│
├── output/
│   └── plagiarism_report.txt
│
├── README.md
└── .gitignore
```

---

## 🧰 How to Run the Project

### **1️⃣ Compile**

```bash
gcc src/main.c -o plagiarism
```

### **2️⃣ Run**

```bash
./plagiarism
```

### **3️⃣ Input**

When prompted, enter the names or paths of two text files:

```
Enter first file name: essayA.txt
Enter second file name: essayB.txt
```

### **4️⃣ Output**

```
Analyzing files...
[████████████████████░░░░░░] 85%
essayA.txt & essayB.txt → 78.5% (RED)
Report saved as plagiarism_report.txt
```

---

## 🧪 Sample Report

```
=============================
   PLAGIARISM REPORT
=============================
File Pair: essayA.txt & essayB.txt
Similarity (Cosine): 78.52%
Verdict: High Similarity
-----------------------------
File Pair: essayA.txt & essayC.txt
Similarity (Jaccard): 42.10%
Verdict: Low Similarity
=============================
```

---

## 💡 Future Enhancements

* GUI / Web interface for file upload
* Real-time highlighting of plagiarized sections
* Integration with Replit for online demo
* Support for PDF and DOCX file parsing
* Optimization using hash maps for token storage

---

## 👨‍💻 Author

**Ayush Pandey**
B.Tech CSE — School of Computer Science, UPES Dehradun
Faculty In-Charge: *Mr. Pankaj Badoni*

📧 *Contact:* [ayush1983pandey@gmail.com](mailto:ayush1983pandey@gmail.com)
🌐 *GitHub:* [@ayush9085](https://github.com/ayushpandey)

---

## 🏆 Acknowledgments

Special thanks to the **UPES School of Computer Science** for providing the opportunity to apply theoretical C programming knowledge to a real-world-inspired system design project.

---

> *"Every line of code that detects similarity is also a reminder to stay original."*
>
> — Ayush Pandey
)

---

## 🏆 Acknowledgments

Special thanks to the **UPES School of Computer Science** for providing the opportunity to apply theoretical C programming knowledge to a real-world-inspired system design project.

---

> *"Every line of code that detects similarity is also a reminder to stay original."*
>
> — Ayush Pandey
