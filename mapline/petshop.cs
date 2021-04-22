/*
Implement “void FeedAnimals();”.  
You are implementing a computerized feeding system for a pet store business.  
The goal is to fetch all the animals from your AnimalDataSource data source and feed each until its Health value reaches at least 100.  
*/

//Pseudocode-ish

int Health; // lets say Health is global and is stored for each animal

FeedAnimals();

static void FeedAnimals()
{
  //Fetch animals store as array
  cats = FetchCats();
  dogs = FetchDogs();

  //Combine array
  animals = cats + dogs;

  //Feed
  foreach(int i in animals){
    if(animals[i].Health == 100) {/*remove from array*/animals[i].remove; }
    else {
      //call dogfeed if dog
      //call catfeed if cat

      FeedAnimals();
    }
  }
}