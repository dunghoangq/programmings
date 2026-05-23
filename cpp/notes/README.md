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