# A few notes on what I've learned.

## 1. Tokens

A token can represent operators or num values.

```cpp
class Token {
    public:
    char kind;
    double value;
};
```

Init tokens t1 and t2

```cpp
Token t1 {'+'};
Token t2 {'8', 11.5};
```

To represent 11.5 + 11.5 calculation, we read input into a vector of tokens.

```cpp
Token get_token(); // function to read token from cin

vector<Token> tok;  // store tokens

int main() {
    while (cin) {
        Token t = get_token();
        tok.push_back(t);
    };
}
```

## 2. Class

A class has public (inteface) and private (implementation) members. Members are private by default without keywords.

```cpp
class X {
        int m;
        int mf(int);

    public:
        int f(int i) {m=i; return mf(i);}
};
```

## 3. Header

Declare class and store it in a `.h` file


## 4. Function

- Use `void` if function doesn't return values.
- Pass-by-value
- Pass-by-const-reference
- Pass-by-reference

### 4.1 Pass-by-value

- Pass-by-value means copy

Pass-by-value example.

```cpp
void print(vector<double> v) {
    cout << "{";
    for (int i=0; i < v.size(); ++i) {
        cout << v[i];
        if (i!=v.size() - 1) cout << ", ";
    }
    cout << "}\n";
}
```

### 4.2 Pass-by-const-reference

Theoretically, we can do this:

```cpp
void f(int x) {
    vector<double> vd1(10);
    vector<double> vd2(1000000);
    vector<double> vd3(x);

    print(vd1);
    print(vd2);
    print(vd3);
}
```

But when the number is large, we have to copy doubles.
All we want is just print the number, not copy it.

> Give the `print()` the address (**reference**) pointing to vector to print, not copy the vector.


```cpp
void print(const vector<double>& v) {   // pass-by-const-reference
    cout << "{ ";
    for (int i=0; i < v.size(); ++i) {
        cout << v[i];
        if (i!=v.size()-1) cout << ", ";
    }
    cout << "}\n";
}
```

`&` means *reference*.

### 4.3 Pass-by-reference

- Function to modify its arrguments.


Point a var to another var.

```cpp
int i = 7;

int& j = i;     // j is a reference to i
j = 9;          // i becomes 9
i = 10;
cout << j << '' << i << '\n';   // print 10 10
```

### 4.4 Rule of Thumb

> 1. Use pass-by-value to pass very small objects
> 2. Use pass-by-const-reference to pass large objects that you don't need to modify
> 3. Return a result rather than modifying an object through a reference argument
> 4. Only use pass-by-reference when you have to

### 4.5 `constexpr` functions

- a function in a constant expression
- Still don't know what the heck it is