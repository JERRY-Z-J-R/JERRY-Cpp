/*多态是由虚函数实现的，这样就解决了用基类指针调用子类对象所产生的歧义，
*例如，有一个工厂有三类人：固定工资工人、计件工人、计时工人；
*他们有共同的特征：都有名字、住址。
*三类员工的工资计算方法不同：固定工资工人，每个月领的工资是不变的；
*计件工人根据生产的产品数量计算工资；计时工人根据工作的时间长短计算工资。
*在main函数中创建不同的员工，并依次输出每个员工的名字、住址、工资等信息。
*/

#include <iostream>
using namespace std;

class Worker //基类Worker类
{
public:
    char name[50];                    //姓名
    char address[200];                //住址
    int salary;                       //工资
    Worker(char *name, char *address) //构造函数
    {
        memset(this->name, 0, 50);
        memcpy(this->name, name, strlen(name));
        memset(this->address, 0, 200);
        memcpy(this->address, address, strlen(address));
    }
    virtual ~Worker() {}
    void printInfo() //打印出姓名、住址、工资信息
    {
        cout << "name:" << name << ",address:" << address
             << ",salary:" << salary << endl;
    }
};

class AWorker : public Worker //固定工资工人类
{
public:
    AWorker(char *name, char *address, int salary) : Worker(name, address)
    {
        this->salary = salary;
    }
};

class BWorker : public Worker //计件工人类
{
public:
    BWorker(char *name, char *address,
            int total_numbers, int every) : Worker(name, address)
    {
        this->salary = total_numbers * every;
    }
};

class CWorker : public Worker //计时工人类
{
public:
    CWorker(char *name, char *address, int total_hours,
            int every) : Worker(name, address)
    {
        this->salary = total_hours * every;
    }
};

int main()
{
    Worker *w; //基类指针
               //基类指针指向固定工人
    w = new AWorker((char *)"A Worker", (char *)"A address", 2000);
    w->printInfo();
    //基类指针指向计件工人
    w = new BWorker((char *)"B Worker", (char *)"B address", 100, 15);
    w->printInfo();
    //基类指针指向计时工人
    w = new CWorker((char *)"C Worker", (char *)"C address", 80, 30);
    w->printInfo();
    system("pause");
    return 0;
}