#include <stdio.h>
#include <string.h>
struct movie_t
{
    char title[20];
    char director[20];
    int runtime;
    float rating;
};
void top5(struct movie_t*, int movies_count);
int main()
{
    struct movie_t movie[7] = {
        {"Titanic","Steven Spielberg",200,88.0},
        {"Lord of The Rings","Woody Allen",3000,200.5},
        {"Andromeda","James Cameron",100,88.0},
        {"It","Steven Spielberg",50,90.0},
        {"Run","Ava DuVernay",119,123.0},
        {"Pitch perfect","James Cameron",100,199.0},
        {"Assasin`s creed","Steven Spielberg",169,200.0}
    };
    struct movie_t* moviePtr = movie;
    top5(moviePtr, 7);
    for(int i =0; i<5;i++)
    {
        puts(moviePtr[i].title);
        puts(moviePtr[i].director);
        printf("%d\n",moviePtr[i].runtime);
        printf("%.1f\n\n",moviePtr[i].rating);
    }
    return 0;
}
void top5(struct movie_t* movie, int movies_count)
{
    struct movie_t movies[5];
    int top_count = 0;
    for(int i = 0;i< movies_count;i++)
    {   
        if(movie[i].runtime >= 86)
            {   
                
                if(top_count < 5)
                {
                    movies[top_count] = movie[i];
                    top_count++;
                }
                else
                {
                    struct movie_t* lowest_movie = &movies[0];
                    for(int j = 0;j<5; j++)
                    {
                        if(movies[j].rating < lowest_movie->rating)
                            lowest_movie = &movies[j];
                    }    
                        
                        if(lowest_movie->rating < movie[i].rating)
                        {
                            strcpy(lowest_movie->title,movie[i].title);
                            strcpy(lowest_movie->director,movie[i].director);
                            lowest_movie->rating = movie[i].rating;
                            lowest_movie->runtime = movie[i].runtime;
                            break;
                        }
                }
            }
    }
    for(int i=0; i<5;i++)
    {
        for (int j = 0; j < 4-i; j++) 
           if (strcmp(movies[j].title,movies[j+1].title) > 0)
           {
                struct movie_t temp = movies[j];
                movies[j] = movies[j+1];
                movies[j+1] = temp;
           }
    }
    for(int i =0; i<5;i++)
    {
        movie[i] = movies[i];
    }
}
