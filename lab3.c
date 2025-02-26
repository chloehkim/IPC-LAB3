int isLower(char letter)
{

    int result;

    if (letter >='a' && letter <='z')
        {
            result = 1;
        }
         else
        {   
            result = 0; 
        }
        
    return result;
}

char toUpper(char letter)
{
int result = isLower(letter);
char upper;

if(result == 1)
    {
        upper = (char)(letter -32);
    }
else
    {
        upper = letter;
    }

    return upper;
}

int biggest(int first, int second, int third)
{
    int big=0; //이거 중요 개념 이해하기!

    if(first > second)
        {
            if(first > third)
                {
                    return big = first;
                }    
            else   
                {
                    return big = third;
                }
        }
     else if (first < second)
        {
            if(second > third)
                {
                    return big = second;
                }
            else
            {
               return big = third; 
            }
        }   
  return big;
}