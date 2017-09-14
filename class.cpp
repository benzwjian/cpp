// 建立物件
Foo foo; //呼叫預設建構子
Foo foo(1);
Foo foo = Foo(1);

// 物件指標
Foo *foo = new Foo();
foo->set(1); //物件指標使用->呼叫函式
foo->get(1);

// 物件陣列
Foo arr[] = {Foo(1), Foo(2), Foo(3)};
for(int i=0; i<3; i++) {
	Foo *foo = arr + i; //每一陣列元素都是物件指標
	foo->set(99);
}

// 取得靜態資料
Foo::PI;

// 靜態資料指標
int *ptr = &Foo::staticVal;
*prt; //取值

// 呼叫靜態函式
Foo::get(1);

// 靜態函式指標
int (*ptr)() = $Foo::staticFun;
ptr(); //呼叫

// 成員函式指標
int (Foo::*ptr)(int) = 0;
ptr = &Foo::get;

Foo foo; //建立物件
(foo.*ptr)(1); //與foo.get(1)相同

Foo *foo = new Foo(); //建立物件指標
(foo->*ptr)(1); //與foo->get(1)相同

// 重載運算子
Point2D operator+(const Point2D&); // 重載+運算子 
Point2D operator-(const Point2D&); // 重載-運算子 
Point2D& operator++(); // 重載++前置，例如 ++p , 傳回自身物件參照
Point2D operator++(int); // 重載++後置，例如 p++ , 傳回新物件
Point2D& operator--(); // 重載--前置，例如 --p , 傳回自身物件參照
Point2D operator--(int); // 重載--後置，例如 p-- , 傳回新物件

// 複製物件
SomeClass s1;
SomeClass s2 = s1; //當物件含有成員指標，需要複製建構子和重載=(https://openhome.cc/Gossip/CppGossip/CopyConstructorAndAssign.html)

// Enumeration
enum Action{stop, sit, stand, walk, run};
enum Action{stop = 1, sit, stand = 2, walk, run};

Action action = stop; //宣告列舉變數

// 公開（public）繼承 and Override
class Foo1 {
public: 
    void show() { 
        cout << "Foo1's show()" << endl; 
    }
};

class Foo2 : public Foo1 {
public: 
    void show() { 
        cout << "Foo2's show()" << endl; 
    }
};

// virtual function用來做動態連結
// https://openhome.cc/Gossip/CppGossip/VirtualFunction.html

// virtual function用來做動態連結和抽象類別
// https://openhome.cc/Gossip/CppGossip/PureVirtualFunction.html

// 執行時期取得物件的型態
// https://openhome.cc/Gossip/CppGossip/RTTI.html











