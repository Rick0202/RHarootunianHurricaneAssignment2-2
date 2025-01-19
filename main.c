#include <stdio.h>

int main(void) {
  double windSpeed = 0;

  printf("The Saffir-Simpson Hurricane Scale classifies hurricanes into five categories numbered 1 through 5.\nThis program will classify the type of storm based upon the users input of the windspeed. \n\nEnter the windspeed: ");
  
  scanf("%lf", &windSpeed);

  if (windSpeed < 74) {
    printf("\nThis is not a hurricane.\nThe windspeed is: %.3lf ", windSpeed);
  }
  if (windSpeed >= 74 && windSpeed < 96) {
    printf("\nThis is a category 1 hurricane.\nThe windspeed is: %.3lf ", windSpeed);
  }
  if (windSpeed >= 96 && windSpeed < 111) {
    printf("\nThis is a category 2 hurricane.\nThe windspeed is: %.3lf ", windSpeed);
  }
  if (windSpeed >= 111 && windSpeed < 130) {
    printf("\nThis is a category 3 hurricane.\nThe windspeed is: %.3lf ", windSpeed);
  }
  if (windSpeed >= 130 && windSpeed < 157) {
    printf("\nThis is a category 4 hurricane.\nThe windspeed is: %.3lf ", windSpeed);
  }
  if (windSpeed >=157) {
    printf("\nThis is a category 5 hurricane.\nThe wind speed is: %.3lf ", windSpeed);
  }
  return 0;
}