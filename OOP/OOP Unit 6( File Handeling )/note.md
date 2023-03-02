# File Handling 
File Handling is used to store data permanently in a computer. Using File Handling we can store our data in secondary memory (Hard Disk ).
 
 - STEP 1 : `Naming File`   
 - STEP 2 : `Opening File` 
 - STEP 3 : `Writing Data into File`  
 - STEP 4 : `Reading Data into File`  
 - STEP 5 : `Closing File`   

input stream = reading content from file 

output stream = Writing content to file 

<!-- # 1. IOS :- -->

## Reading Data From 2 File simultaneously through EOF (End-Of-File )

# File Pointers and Their Manipulations 
Each File has two associated pointers known as file pointers.<br> One of them is called 
 - `input pointer` (or `get` pointer ) <br> 
  - other is called `output pointer` (or `put` pointer).

`seekp()`  Means get pointer(input) is a Specific Location <br>
`seekg()`  Means put pointer(output) is a Specific Location <br>
`telp() `  Gives the current position of get pointer<br>
`telg() `  Gives the current position of put pointer<br>

eg.

`infile.seekg(10);`


ios::beg
ios::cur
ios::end



## Sequential Input and Output Operations 








    