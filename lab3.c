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