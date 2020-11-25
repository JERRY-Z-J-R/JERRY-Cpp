#include <iostream>

int main()
{
    std::cout << "/*";                        //普通字符串 编译可以通过
    std::cout << "*/";                        //普通字符串 编译可以通过
    std::cout << /* "*/" */;                  // /* */ 中出现了 */ 导致错误  
    std::cout << /* "*/" /* "/*" */;          // /* "*/ 注释  ； " */ " 字符串 ；/*" */ 注释       
    
    return 0;
}