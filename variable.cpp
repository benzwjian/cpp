// 變數宣告後初始其值
int var = 0;
float var = 0.0;
double var = 0.0;
char var = 'A';
bool var = false;

// 隱喻的方式來宣告變數並指定初值
int var(0);
float var(0.0);
double var(0.0);
char var('A');
bool var(false);

// 宣告變數後，使用以下的建構子（Constructor）方式將變數的值初始為0
int var = int();
float var = float();
double var = double();
char var = char();
bool var = bool();

// 常數
const int maxNum = 10;

// 宣告無號的整數變數
unsigned int var;

// 顯式型態轉換（Explicit type conversion）
int num = 0; 
double number = 3.14; 
num = static_cast<int>(number);

// 陣列
int iarr[10];
double darr[10];
char carr[10];

// 初始化陣列: 整數陣列中的元素都會被初始為0，浮點數陣列則會被初始為0.0，字元陣列則會被初始為空字元（'\0'），而boolean數陣列則會 被初始為false
int irr[10] = {0}; 
double darr[10] = {0.0}; 
char carr[10] = {'\0'}; 
bool barr[10] = {false};

// 初始化陣列
int iarr[5] = {0, 1, 2, 3, 4}; 
double darr[5] = {0.0, 0.1, 0.2, 0.3, 0.4}; 
char carr[5] = {'A', 'B', 'C', 'D', 'E'}; 
bool barr[5] = {false, true, false, true, false};

// 宣告陣列時只希望初始幾個元素
int iarr[5] = {0, 1}; 
double darr[5] = {0.0, 0.1}; 
char carr[5] = {'A', 'B'}; 
bool barr[5] = {false, true};

// 指定的元素個數自動設定陣列大小
int iarr[] = {1, 2, 3}; 
double darr[] = {0.4, 3.2, 1.0, 4.2}; 
char carr[] = {'A', 'B'};

// 得知陣列長度
int iarr[] = {1, 2, 3, 4, 5, 6};
sizeof(iarr) / sizeof(iarr[0])

// 不可以將陣列直接指定給另一個陣列
int arr1[5];
int arr2[5];
arr1 = arr2; // 錯誤！不能直接指定陣列給另一個陣列

// <vector>
#include <vector>
vector<int> ivector(10);

// init <vector>: 宣告有10個元素的vector，並將所有的元素值初始為5
vector<int> ivector(10, 5);

// vector可以使用另一個vector作為引數來建構
vector<int> ivector1(5, 1);
vector<int> ivector2(ivector1);

// 建構一個元素為空的vector物件
vector<int> ivector;

// 字元陣列
char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
char str[] = "hello";

// string物件
#include <string>
string str1;  // 建立一個string物件，內容為空字串
string str2("caterpillar");  // 以字串常量建立字串
string str3(str2); // 以string實例建立字串

// string assignment
string str1("text1");
string str2("text2");
str1 = str2;

// 使用+運算子來串接字串
str1 = str1 + str2;
str1 = str1 + "\n";

// pointer
int var = 10; 
int *ptr = &var;

// 多個宣告
int *ptr1, *ptr2;

// 只希望儲存記憶體的位址
void *ptr;

// 轉型為int型態指標並指定給iptr
int var = 10; 
void *vptr = &var ;
int *iptr = reinterpret_cast<int*>(vptr);

// 用const宣告的變數，必須使用對應的const型態指標
const int var = 10;
const int *vptr = &var;

// 陣列指標
const int length = 10;
int arr[length] = {0}; 
int *ptr = arr;

// new/delete
int *ptr = new int;
int *ptr = new int(100); // init
delete prt

// 陣列動態配置
int *arr = new int[1000];
delete [] arr;

// 字串指標
char *str = "hello";
str = "world";

// Reference (Alias)
int var = 10;
int &ref = var;
cout << "ref: " << ref << endl;













