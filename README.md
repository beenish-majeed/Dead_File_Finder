<div align="center">

<br>

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=600&size=32&duration=2600&pause=1000&color=FFFFFF&center=true&vCenter=true&width=850&lines=DEAD+FILE+FINDER" alt="Dead File Finder"/>

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=400&size=15&duration=2100&pause=750&color=D4D4D4&center=true&vCenter=true&width=900&lines=%24+select+folder;Scanning+files...;Analyzing+file+information...;Potential+dead+files+found." alt="Dead File Finder workflow"/>

<br><br>

</div>

---

## About

*A C++ utility for scanning, analyzing, and cleaning files inside a selected folder.*

Dead File Finder lets users select a folder, inspect the files inside it, analyze their basic properties, and decide which files should be kept or deleted.

<br><br>

---

## Features

* Select and validate any folder path from the computer
* Scan files and folders inside the selected location
* Display file name, extension, size, and word count
* Analyze files based on their basic properties
* Categorize files as empty, large, or normal
* Identify potential files worth reviewing
* Permanently delete a selected file
* Handle invalid paths and filesystem errors

<br><br>

---

## How It Works

```mermaid
flowchart LR

    A["<b>📁 SELECT FOLDER</b><br/><br/>Choose folder"]

    B["<b>🔍 SCAN FILES</b><br/><br/>Find all files"]

    C["<b>⚙️ ANALYZE</b><br/><br/>Read file info"]

    D["<b>📋 DISPLAY INFO</b><br/><br/>Name · Extension · Size"]

    D2["<b>🚩 FLAG FILES</b><br/><br/>Show unnecessary files"]

    E{"<b>NEXT ACTION?</b>"}

    F["<b>👁️ REVIEW FILE</b><br/><br/>View details"]

    G["<b>🗑️ DELETE FILE</b><br/><br/>Remove permanently"]

    H["<b>🚪 EXIT TOOL</b><br/><br/>Close program"]

    A --> B
    B --> C
    C --> D
    D --> D2
    D2 --> E

    E -->|Review| F
    E -->|Delete| G
    E -->|Exit| H

    classDef input fill:#0a1128,stroke:#3b82f6,color:#ffffff,stroke-width:2.5px;
    classDef process fill:#12121a,stroke:#8b5cf6,color:#ffffff,stroke-width:2.5px;
    classDef analysis fill:#0a1a14,stroke:#10b981,color:#ffffff,stroke-width:2.5px;
    classDef decision fill:#1f1508,stroke:#d97706,color:#ffffff,stroke-width:2.5px;
    classDef output fill:#1a0e14,stroke:#e11d48,color:#ffffff,stroke-width:2.5px;

    linkStyle default stroke:#525252,stroke-width:1.5px;

    class A input;
    class B,C process;
    class D,D2 analysis;
    class E decision;
    class F,G,H output;
```

<br><br>

---

## Built With

*C++ and Object-Oriented Programming applied to a practical file-system utility.*

<div align="center">

`C++`    `Object-Oriented Programming`    `Filesystem & File Handling`

</div>

<br><br>

---

## Run Locally

*Compile the project and run the utility directly from the terminal.*

**Clone the repository**

```bash
git clone <your-repository-url>
cd Dead_File_Finder
```

**Compile**

```bash
g++ -g src/main.cpp src/File.cpp src/Folder.cpp src/Scanner.cpp src/Analyzer.cpp -o main.exe
```

**Run**

```bash
.\main.exe
```

<br><br>

---

## What's Next

*Future updates will focus on making file analysis more useful while keeping the tool simple and practical.*

<br><br>

---

<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=400&size=14&duration=2800&pause=1300&color=D4D4D4&center=true&vCenter=true&width=600&lines=Find+what+you+no+longer+need." alt="Closing animation"/>

</div>