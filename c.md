# C Tutorial
__C Programming__ က general-purpose, procedural, imperative computer programming language ဖြစ်ပါတယ်။ Bell Telephone Laboratories မှာ UNIX operating system ကို develope လုပ်ဖို့အတွက် Dennis M. Ritchie ဆိုသူက က 1972 ခုနှစ်မှာ C ကို ဖန်တီးခဲ့တာဖြစ်ပါတယ်။ C က computer language တွေထဲမှာ အတွင်တွင်ကျယ်ကျယ်အသုံးပြုဆုံး language ဖြစ်ပါတယ်။ Java programming language နဲ့အတူ လူကြိုက်များ အသုံးများတဲ့ language တစ်ခုဖြစ်ပါတယ်။

## ဘာကြောင့်  C Programming ကိုလေ့လာသင့်တာလဲ?
C Programming language က ကျောင်းသားတွေနဲ့ Software Engineer ပညာနဲ့ အထူးကျွမ်းစွာ လုပ်ကိုင်လိုသူများအတွက် မဖြစ်မနေလေ့လာရမည့် programming language ဖြစ်ပါတယ်။ အောက်တွင် C Programming ရဲ့အားသာချက်အချို့ကို စာရင်းပြုစုထားပါတယ်။ 

- သင်ယူရလွယ်ကူခြင်း
- Structured Language ဖြစ်ခြင်း
- စွမ်းဆောင်ရည်မြင့်တဲ့ program ကိုပြုလုပ်နိုင်ခြင်း
- low-level activities များကို handle လုပ်နိုင်ခြင်း
- အမျိုုးမျိုူသော ကွန်ပျူတာ platforms များပေါ်တွင် compile လုပ်နိုင်ခြင်း


## C နဲ့ပါတ်သက်သောအချက်အလက်များ
- C ဆိုတာ UNIX လို့ခေါ်တဲ့ Operating System ကို ရေးဖို့အတွက်တည်ဆောက်ထားတာဖြစ်ပါတယ်။
- C ဆိုတာ B language ကလာနေဆင်းသက်လာတာဖြစ်တယ်၊ B က 1970 အစောပိုင်းလောက်မှ ထွက်ပေါ်လာတဲ့ language ဖြစ်ပါတယ်။
- UNIX OS တစ်ခုလုံးကို C နဲ့ ရေးခဲ့တာဖြစ်ပါတယ်။
- C က System Programming Language တွေထဲမှာ နာမည်ကြီးအသုံးများတဲ့ language ဖြစ်ပါတယ်။
- state-of-the-art software အများစုက C နဲ့ ဖန်တီးထားတာဖြစ်ပါတယ်။

## Hello World using C Programming
C Programming နဲ့ Hello World ဆိုတဲ့ Program ငယ်လေးစရေးကြမယ်။

```c
#include <stdio.h>

int main(){
    /* my first program in C */
    printf("Hello, World! \n");

    return 0;
}
```

## Applications of C Programming
C ကို အစဦးပိုင်းမှာ system developement work အတွက်အသုံးပြုခဲ့ပါတယ်။ အထူးသဖြင့် operating system တွေဖန်တီးတဲ့နေရာမှာသုံးပါတယ်။ C ကို system development language အဖြစ်သတ်မှတ်ယူခဲ့ပါတယ်၊ ဘာ့ကြောင့်ဆိုတော့ assembly language နဲ့ ရေးထားတဲ့ code နီးပါမြန်ဆန်လို့ဖြစ်ပါတယ်။ C ကို အသုံးပြုတဲ့ နေရာအချို့ကို ဥပမာအနေနဲ့ဖော်ပြပေးပါမယ် -

- Operating Systems
- Language Compilers
- Assemblers
- Text Editors
- Print Spoolers
- Modern Programs
- Databases
- Language Intepreters
- Utilities

## Audience
ဒီ tutorial ကတော့ C Programming ကို အစအဆုံးလေ့လာလိုသူ software programmers တွေအတွက် designed လုပ်ထားတာဖြစ်ပါတယ်။ ဒီ C Tutorial က C Programming ကို ကျွမ်းကျင်စာနားလည်သွားနိုင်ယုံသာမက ကိုယ်တိုင်ကြံစပြီး ရေးသားနိုင် ဆက်လက်လေ့လာနိုင် လောက်သည်အထိ ပေးစွမ်းနိုင်ပါတယ်။

## Prerequistes
ဒီ tutorial ကို မလေ့လာမှီ Computer Programming terminologies ကို သင့်အနေနဲ့ နားလည်ထားင့်ပါတယ်။ programming languages တစ်ခုခုရဲ့ အခြေခံကို သိထားပါက C Programming ရဲ့ concepts တွေကို နားလည်လွယ်ပြီး လေ့လာတဲ့နေရာမှာမြန်ဆန်သွားမှာဖြစ်ပါတယ်။

# C Language - Overview

....

## C Programs 
C program တစ်ခုက နည်းဆုံး စာကြောင်းသုံးကြောင်းကနေ line ပေါင်း millions ချီတဲ့အထိ file တစ်ခုအတွင်းရေးထည့်နိုင်သလို file တွေခွဲပြီးတော့လဲရေးနိုင်ပါတယ်။ file ရဲ့ extension က __".c"__ ပါ။ ဥပမာ - _hello.c_ ။ "vi", "vim" ဒါမှမဟုတ် ကြိုက်နှင့်သက်ရာ text editor ကိုသုံးပြီးတော့ C Program ကို file ထဲ ထည့်နိုင်ပါတယ်။ 

