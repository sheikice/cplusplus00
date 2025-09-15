# *cplusplus00*

## *Ex 00*
### 🎯 <ins>Objective</ins>
Create a program that changes a user input into an `uppercased string`.
### 📖 <ins>Learning</ins>
- streams
 - cout <<
 - cin >>
 - getline
### ✍️ <ins>Usage</ins>
```bash
./megaphone "arg 1" "arg 2" ... 
```
***
## *Ex 01*
### 🎯 <ins>Objective</ins>
Create a program that simulate a simple `phonebook`

### <ins> 📖 Learning</ins>
- Classes and instances
- Methods and class attributes

### ✍️ <ins>Usage</ins>
```bash
./phonebook
```
add a contact
```
  ADD
```
show list of contacts and show a contact datas
```
  SEARCH
    [index of a contact]
```
quit the program
```
EXIT
```
```
ctrl + c
```
***
## *Ex 02*
### 🎯 <ins>Objective</ins>
Recreate a lost `cpp file` based on a tester file and a .hpp.

### 📖 <ins>Learning</ins>
- static members
- time print + formatting (fn:put time)

> [!NOTE]
> `cin` stream can be `closed` with EOF.
> It's important to check `cin` in the getline loop
> ```cpp
>  while (cin && line == "")
> {
>     getline(cin, line);
> }
> ```
### ✍️ <ins>Usage</ins>
```bash
./tests
```
***
