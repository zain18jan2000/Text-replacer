# Text-replacer
A c program to find and replace a word in a File by another given word <br/>
<br/>
A text replacing program can be helpful when we need to replace a word such as name by of a person by another word or name at more than one locations in a file.
<br/><br/>
This program can replace a word at all the locations in a file of extension **.txt** by another one. The program can also be used for other files such as json and html after some modification in it. To use this program for **.html**, **.dat** or **.json** file following changes are needed in the source code 'main.c'.<br/>
1- In line no-17,20,73 and 78 replace the '.txt' by the extension of the file you want to edit using this text replacer program. For example, if you are want to edit is an html file then in line no-17 simply change  **my_text.txt** to **my_text.html**. <br/>
2- Recompile the source code to obtain new .exe file.
