#include"unity.h"
#include"stdio.h"
#include"stdlib.h"
extern void addstudent();
extern void studentrecord();
extern void searchstudent();
extern void delete();
//void setUp(void)
//{

//}
//void tearDown(void)
//{

//}


int main(void)
{
     UnityBegin(NULL);

    RUN_TEST(addstudent);
    RUN_TEST(studentrecord);
    RUN_TEST(searchstudent);
    RUN_TEST(delete);

    return (UnityEnd());
}