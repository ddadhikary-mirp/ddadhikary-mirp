void setup() {
  size(displayWidth, displayHeight);
  resetGame();
  textFont(createFont("Arial Bold", 50));
}

void draw() {
drawGameScreen() ;  
drawPlayer() ;
}

void drawStartScreen() {
}

void drawLoseScreen() {
}

void drawGameScreen() {
}

void drawPlayer() {
background (bgColor) ;
 fill(playerColor) ;
ellipse (playerX,playerY,playerRadius,playerRadius);
}




void drawPlatforms() {


}

void resetGame(){
  // Initialize Player Position and Velocity
  initializePlatforms();
}

void initializePlatforms() {
  // Create Initial Set of Platforms
platforms[0][0]=30,platforms[0][1]=20;
platforms[1][0]=80,platforms[1][1]=20;
platforms[2][0]=130,platforms[2][1]=20;
platforms[3][0]=180,platforms[3][1]=20;
platforms[4][0]=230,platforms[4][1]=20;
}






void displayScore() {
  // Show Player Score in a corner
}