
// I`ve spent in this task: 12 hours;3 re-writings;3 large bottles of water Devin;
// There is still hope in me.

#include <stdio.h>
#include <string.h>
#define MAX 10
int fill(int height,int width,int x,int y,char liquid,char target,char shape[height][width]);
int main()
{   
    int width, height;
    scanf("%d",&width);
    scanf("%d",&height);
    getchar();
    
    /*char shape[10][11]={{'.','.','#','#','.','.','.','.','.','.','\0'},
                        {'.','#','O','.','#','.','.','.','.','.','\0'},
                        {'.','#','.','.','#','.','.','#','.','.','\0'},
                        {'.','.','#','#','.','.','#','.','#','.','\0'},
                        {'.','.','.','.','.','.','.','#','.','.','\0'},
                        {'.','.','#','#','#','#','#','.','.','.','\0'},
                        {'.','.','#','.','.','.','#','.','.','.','\0'},
                        {'.','.','#','.','*','.','#','#','.','.','\0'},
                        {'.','.','.','#','#','.','.','#','.','.','\0'},
                        {'.','.','.','.','#','#','#','#','.','.','\0'}};
    */
    char shape[height][width],blank[width + 2];;
    
    for(int i=0;i<height;i++)
    {   
        fgets(blank,width+1,stdin);
        getchar();
        
        strcpy(shape[i], blank);
    }
    
    for(int i=0;i<height;i++)
    {
        
        for(int j=0;j<width;j++)
        {  
            if(shape[i][j] == 'O')
            {
                fill(height,width,j-1,i,'O','.',shape);
                fill(height,width,j+1,i,'O','.',shape);
                fill(height,width,j,i-1,'O','.',shape);
                fill(height,width,j,i+1,'O','.',shape);
                
                fill(height,width,j-1,i,'@','*',shape);
                fill(height,width,j+1,i,'@','*',shape);
                fill(height,width,j,i-1,'@','*',shape);
                fill(height,width,j,i+1,'@','*',shape);

            }
            if(shape[i][j] == '*')
            {
                fill(height,width,j-1,i,'*','.',shape);
                fill(height,width,j+1,i,'*','.',shape);
                fill(height,width,j,i-1,'*','.',shape);
                fill(height,width,j,i+1,'*','.',shape);
                
                fill(height,width,j-1,i,'@','O',shape);
                fill(height,width,j+1,i,'@','O',shape);
                fill(height,width,j,i-1,'@','O',shape);
                fill(height,width,j,i+1,'@','O',shape);
            }
            if(shape[i][j] == '@')
            {
                fill(height,width,j-1,i,'@','O',shape);
                fill(height,width,j+1,i,'@','O',shape);
                fill(height,width,j,i-1,'@','O',shape);
                fill(height,width,j,i+1,'@','O',shape);
                fill(height,width,j-1,i,'@','*',shape);
                fill(height,width,j+1,i,'@','*',shape);
                fill(height,width,j,i-1,'@','*',shape);
                fill(height,width,j,i+1,'@','*',shape);
            }
        }
    }
    for(int i =0;i<height;i++)
    {   
        for(int j=0;j<width;j++)
        {  
            printf("%c",shape[i][j]);
        }
        printf("\n");
    }

}

int fill(int height,int width,int x,int y,char liquid,char target,char shape[height][width])
{
    if(x < 0 || y < 0 || x > width || y > height)
        return 0;
    if(shape[y][x] != target)
        return 0;
        
    shape[y][x] = liquid;
    fill(height,width,x,y+1,liquid,target,shape);
    fill(height,width,x+1,y,liquid,target,shape);
    fill(height,width,x,y-1,liquid,target,shape);
    fill(height,width,x-1,y,liquid,target,shape);
    return 0;
}


