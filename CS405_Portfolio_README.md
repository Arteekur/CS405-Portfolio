# CS-405 Secure Coding Portfolio

**Gurman Dhot | Southern New Hampshire University | CS-405: Secure Coding**

Welcome! This repository highlights my work in secure software development, from writing a practical security policy for the fictional organization **Green Pace** to testing C++ code for common vulnerabilities. The biggest lesson I took from this course is that security needs to be part of the development process from the beginning—not something added right before release.

## Featured Projects

### Project One — Green Pace Secure Development Policy

📄 **[Read the security policy (Word document)](Gurman_Dhot_CS405_Project_One_Green_Pace_Security_Policy.docx)**

I developed a security policy guide that translates secure coding principles into expectations developers can apply in their daily work. The document includes:

- Ten core security principles and ten C/C++ coding standards, with examples of unsafe and safer approaches
- Risk assessments that consider severity, likelihood, remediation effort, and priority
- Recommendations for automated detection, secure code reviews, and defense in depth
- Policies for encryption, authentication, authorization, accounting, and ongoing policy management

### Project Two — Green Pace Security Policy Presentation

📊 **[View the presentation (PowerPoint)](Gurman_Dhot_CS405_Project_Two_Presentation_TESTED.pptx)**

This presentation communicates the Green Pace policy, explains how to prioritize security risks, and demonstrates container-bounds testing in C++. It includes a risk matrix, guidance on encryption and access controls, and screenshots of **six passing Visual Studio unit tests** for valid and invalid container indexes.

🔧 **[View the C++ container-bounds unit tests](GreenPace_ContainerBounds_UnitTests.cpp)**

## Secure Coding Exercises

These activities helped me move from recognizing vulnerabilities to writing and evaluating safer code.

| Module | Exercise | What I practiced | Artifact |
| --- | --- | --- | --- |
| 2 | Buffer overflow | Limiting C++ input to a fixed-size buffer and detecting oversized input | [Source ZIP](Gurman%20Dhot%20CS405%20Module%20Two%20BufferOverflow%20Source2.zip) |
| 2 | SQL injection | Exploring SQL injection patterns in a C++/SQLite learning exercise | [Source ZIP](CS405_Module2_SQLInjection_Modified2.zip) |
| 4 | Exception handling | Using standard and custom exceptions with targeted error handling | [Source ZIP](Gurman_Dhot_CS405_Module_4_Exceptions_Source2.zip) |
| 4 | Testing milestone | Writing Google Test cases for a C++ collection and its boundary conditions | [Source ZIP](Gurman_Dhot_CS405_Module_4_Milestone_Source2.zip) |
| 5 | Encryption exercise | Practicing reversible XOR transformations, file I/O, and input checks | [Source ZIP](Gurman_Dhot_CS405_Module_5_Encryption2.zip) |
| 5 | Static code analysis | Reviewing findings and documenting results using Cppcheck and Visual Studio | [Results ZIP](Gurman_Dhot_CS405_Module_5_Static_Code_Analysis2.zip) |

> **Learning-project note:** These files are coursework examples rather than production-ready security solutions. In particular, pattern-based SQL filtering is not a replacement for parameterized queries, and the XOR exercise is not suitable for protecting sensitive data in a real application.

## Module Eight — Portfolio Reflection

📝 **[Read my portfolio reflection (Word document)](Gurman_Dhot_CS405_Module_Eight_Portfolio_Reflection.docx)**

My final reflection connects the course projects to four ideas I'll carry into future work: adopting secure coding standards early, weighing risk against the cost of mitigation, applying Zero Trust principles, and keeping security policies clear and actionable.

## Key Takeaways

- **Build security in early.** Secure design, careful input handling, and code review are easier to maintain than last-minute fixes.
- **Prioritize the risks that matter.** Consider possible impact, likelihood, and the effort needed to reduce exposure.
- **Never assume access equals trust.** Verify identity and permissions and apply least privilege.
- **Test what can go wrong.** Boundary tests, automated analysis, and thoughtful exception handling help reveal problems that successful runs alone might miss.
- **Make policies useful.** A security policy should guide real engineering decisions, not just sit in a document.

---

*Created as an educational portfolio for SNHU CS-405. Green Pace is a course project scenario; the artifacts do not represent a deployed production system.*
