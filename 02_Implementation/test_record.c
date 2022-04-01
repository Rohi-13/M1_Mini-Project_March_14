#include"unity.h"
#include"stdio.h"
#include"stdlib.h"
extern void addstudent1();
extern void studentrecord1();
extern void searchstudent1();
extern void delete1();
//void setUp(void)
//{

//}
//void tearDown(void)
//{

//}


int main(void)
{
     UnityBegin(NULL);

    RUN_TEST(addstudent1);
    RUN_TEST(studentrecord1);
    RUN_TEST(searchstudent1);
    RUN_TEST(delete1);

    return (UnityEnd());
}