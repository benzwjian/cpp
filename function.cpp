// 預設引數
double area(double, double = 3.14);

double area(double r, double pi) { 
    return r*r*pi; 
}

// Overloaded Function
void showpara(int); 
void showpara(int, int);

void showpara(int x) { 
    cout << "引數：" << x 
         << endl; 
} 

void showpara(int x, int y) { 
    cout << "引數：" << x 
         << "\t" << y 
         << endl; 
}

// 參數的傳址
int main() { 
    int x = 10; 
    .... 
    cout << increment(&x) << endl; 
    cout << x << endl; 

    return 0; 
} 

int increment(int *n) { 
    *n = *n + 1; 
    return *n; 
}

// 參數的傳參考: 常用在傳遞物件
int main() { 
    int x = 10; 
    .... 
    cout << increment(x) << "\n"; 
    cout << x << "\n"; 

    return 0; 
} 

int increment(int &n) { 
    n = n + 1; 
    return n; 
}

// return的傳址
int* createArray(int);
int* createArray(int m) { 
 int *a = new int[m]; 

 for(int i = 0; i < m; i++) {
 a[i] = 0; 
 }

 return a; 
}

// return的傳參考
string& foo();
string& foo() { 
 string *s = new string("This is caterpillar speaking."); 

 cout << "address: " << s 
 << endl << *s << endl; 

 return *s; 
}

// 函式指標
int foo(int, int); //定義函式
int foo(int n1, int n2) { //實作函式
    cout << "foo(int, int): " 
         << n1 << "\t" << n2 
         << endl;

    return 0; 
} 

int (*ptr1)(int, int) = 0;
ptr1 = foo;
ptr1(1, 2);









