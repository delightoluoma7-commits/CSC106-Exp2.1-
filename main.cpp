
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream file("index.html");

    if (!file.is_open())
    {
        cout << "Error creating file!" << endl;
        return 1;
    }

    file << R"(<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Delight Ekeanya - Portfolio</title>
<style>
*{margin:0;padding:0;box-sizing:border-box}
body{font-family:'Segoe UI',Arial,sans-serif;line-height:1.6;background:#0f172a;color:#e2e8f0}
.container{max-width:1000px;margin:0 auto;padding:20px}
header{background:linear-gradient(135deg,#667eea,#764ba2);padding:60px 20px;text-align:center;border-radius:20px;margin:20px 0}
header h1{font-size:3rem;margin-bottom:10px}
header p{font-size:1.2rem;opacity:0.9}
.card{background:#1e293b;padding:30px;border-radius:15px;margin:20px 0;border:1px solid #334155}
.card h2{color:#60a5fa;margin-bottom:15px;border-bottom:2px solid #334155;padding-bottom:10px}
.info-grid{display:grid;grid-template-columns:repeat(auto-fit,minmax(250px,1fr));gap:15px}
.info-item{background:#0f172a;padding:15px;border-radius:10px}
.info-item strong{color:#60a5fa}
a{color:#60a5fa;text-decoration:none}
a:hover{text-decoration:underline}
footer{text-align:center;padding:20px;opacity:0.6}
@media(max-width:600px){header h1{font-size:2rem}}
</style>
</head>
<body>
<div class="container">
<header>
<h1>Delight Ekeanya</h1>
<p>Software Engineering Student | Miva Open University</p>
<p>Matric: 301876662 | Dept: 2025/c/cyb/1014</p>
</header>

<div class="card">
<h2>About Me</h2>
<p>I am Delight Ekeanya, a dedicated Software Engineering student at Miva Open University with passion for building responsive web solutions and C++ programming. This portfolio was programmatically generated using C++ fstream as part of CSC106 Experiment 2.1.</p>
</div>

<div class="card">
<h2>Academic Information</h2>
<div class="info-grid">
<div class="info-item"><strong>Full Name:</strong> Delight Ekeanya</div>
<div class="info-item"><strong>Matric Number:</strong> 301876662</div>
<div class="info-item"><strong>Department Code:</strong> 2025/c/cyb/1014</div>
<div class="info-item"><strong>Course:</strong> CSC106 - Introduction to Programming</div>
<div class="info-item"><strong>Experiment:</strong> Exp 2.1 - Portfolio with C++</div>
<div class="info-item"><strong>Email:</strong> d.ekeanya6662@miva.edu.ng</div>
</div>
</div>

<div class="card">
<h2>Skills</h2>
<div class="info-grid">
<div class="info-item"><strong>Languages:</strong> C++, HTML, CSS, JavaScript</div>
<div class="info-item"><strong>Tools:</strong> VS Code, Git, GitHub</div>
<div class="info-item"><strong>Concepts:</strong> OOP, File Handling, Responsive Design</div>
<div class="info-item"><strong>GitHub:</strong> <a href="https://github.com/delightoluoma7-commits">delightoluoma7-commits</a></div>
</div>
</div>

<div class="card">
<h2>Project: CSC106 Portfolio Generator</h2>
<p>This website was generated using C++ file stream (fstream). The program writes a fully responsive HTML file with modern CSS, making it viewable on mobile and desktop.</p>
<p><strong>Technologies:</strong> C++ (fstream), HTML5, CSS3, GitHub Pages</p>
</div>

<footer>
<p>&copy; 2026 Delight Ekeanya - Miva Open University - CSC106 Exp 2.1</p>
</footer>
</div>
</body>
</html>
)";

    file.close();
    cout << "--- SUCCESS ---" << endl;
    cout << "File index.html created successfully!" << endl;
    return 0;
}