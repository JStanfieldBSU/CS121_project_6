# CS121_project_6
File IO in C++


## main
```
import libraries (iostream fstream string)

open data.csv
declare a string
int fileA
int fileB
string fileWord

while there is still data in the file
  convertLine(string)
  outputLine()
```

## void convertLine()
```
  this is where you grab the line and do the sstream conversions?
```

## void outputLine(int a, int b, string word)
```
int sum = (a+b);

for(int i = 0; i < sum; i++)
  print word;
print \n
```

## data.csv
```
1, 2, this
3, 3, is
8, 1, a
2, 4, lot
2, 1, of
4, 2, fun
```

## expected output
```
this  this  this 
is  is  is  is  is  is 
a  a  a  a  a  a  a  a  a 
lot  lot  lot  lot  lot  lot 
of  of  of 
fun  fun  fun  fun  fun  fun 
```