library(tidyverse)
library(stringi)
setwd(dirname(rstudioapi::getActiveDocumentContext()$path))

# Count Function

getcount <- function(vol){
  scriptures %>% 
    filter(volume_id == vol) %>% 
    pull(scripture_text) %>% # Pull selects column
    str_locate_all("and it came to pass") %>%
    stri_stats_latex() %>% 
    enframe() %>% # Makes a Tibble
    filter(name == "Words") %>%
    pull(value)
}

# Import all your datasets!
scriptures <- read.csv("./lds-scriptures.csv") %>% na.omit()

scriptures$scripture_text <- scriptures$scripture_text %>% tolower() 

ot <- getcount(1)
nt <- getcount(2)
bom <- getcount(3)
dc <- getcount(4)