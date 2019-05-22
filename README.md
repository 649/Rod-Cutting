# Rod Cutting

> Author: [@037](https://twitter.com/037)

### Compile
```
sudo g++ -std=c++11 -o RodCutting.exe RodCutting.cpp
```

### Input structure
The input has the following format. The input starts with n. Then, p1; p2; :::; pn follow, one per each line.

### Output structure
In the first line, output the maximum revenue (Rn), followed by an enter key. In the second line, sequentially output the length of each piece in your optimal cutting, followed by a space key. The second line ends with -1 and an enter key.

### Example

*Input*
```
7
1
5
8
9
10
17
17
```

*Output*
```
18
1 6 -1
```