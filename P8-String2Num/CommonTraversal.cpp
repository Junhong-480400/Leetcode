class Solution {
public:
    int myAtoi(string str) {
        long  temp=0;
        int k=0;    //k为下标，初始化为0，即第一个元素的下标
        while(k<str.size()&&str[k]==' ')k++;    //先忽略空格
        int flag=1; //flag用于判断+/-
        if(str[k]=='-'){
            flag=-1;    //一旦为负数，flag变为-1
            k++;   
        }
       else if(str[k]=='+')k++;
        if('9'<str[k]||str[k]<'0')return 0;
        while(k<str.size()&&('0'<=str[k]&&str[k]<='9')){
            temp=temp*10+str[k]-'0';
           if(temp-1>INT_MAX)break;
//两个作用一是简单判断是否越界提前终止，二是可能测试数据会有大于long 型的数据
            k++;
        }
         temp=flag*temp;
         if(temp>INT_MAX)return INT_MAX;
         if(temp<INT_MIN)return INT_MIN;
       return temp;
        
    }
};
