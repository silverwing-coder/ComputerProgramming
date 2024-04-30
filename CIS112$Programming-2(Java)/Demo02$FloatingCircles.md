<h6>ver. Apr-2024</h6>
<h3>CIS 112 Graphic Demo - Floating Circles </h3>

---

```java
public class Circle {
	public int radius;
	public int locationX, locationY;
	public int speedX, speedY;
	public int[] color = new int[3];

	public Circle(int radius, int[] location, int[] speed, int[] color) {
		this.radius = radius;
		// deep copy required for reference variables
		this.locationX = location[0];
		this.locationY = location[1];
		this.speedX = speed[0];
		this.speedY = speed[1];
		for(int i = 0; i < color.length; i++) {
			this.color[i] = color[i];
		}
	}
//
//	public int getRadius() {
//		return radius;
//	}
//	public void setRadius(int radius) {
//		this.radius = radius;
//	}
//
//	public int[] getLocation() {
//		return location;
//	}
//	public void setLocation(int[] location) {
//		for(int i = 0; i < location.length; i++) {
//			this.location[i] = location[i];
//		}
//	}
//
//	public int[] getSpeed() {
//		return this.speed;
//	}
//	public void setSpeed(int[] speed) {
//		for(int i = 0; i < speed.length; i++) {
//			this.speed[i] = speed[i];
//		}
//	}
//
//	public int[] getColor() {
//		return color;
//	}
//	public void setColor(int[] color) {
//		for(int i = 0; i < color.length; i++) {
//			this.color[i] = color[i];
//		}
//	}
}

```

```java
public class MainApp extends PApplet{


	int NUM_CIRCLES = 5;
	int WIDTH = 900;
	int HEIGHT = 600;
	Circle[] circles = new Circle[NUM_CIRCLES];
	Random randNumGen = new Random();

	int red = 0, green = 0, blue = 0;
	int distance = 0;

	/* initialize graphic environments */
	public void settings() {
		size(WIDTH, HEIGHT);
		int radius;
		int[] location = new int[2];
		int[] speed = new int[2];
		int[] color = new int[3];
		for(int i = 0; i < NUM_CIRCLES; i++) {
			radius = randNumGen.nextInt(50) + 30;
			location[0] = randNumGen.nextInt(WIDTH-200) + 100;
			location[1] = randNumGen.nextInt(HEIGHT-200) + 100;
			speed[0] = 1;
			speed[1] = 1;
			color[0] = randNumGen.nextInt(255);
			color[1] = randNumGen.nextInt(255);
			color[2] = randNumGen.nextInt(255);
			circles[i] = new Circle(radius, location, speed, color);
		}

//		for(int i = 0; i < NUM_CIRCLES; i++) {
//			System.out.println(circles[i].getLocation()[0]);
//			System.out.println(circles[i].getLocation()[1]);
//		}
	}

	public void draw() {
		background(200);
		for(int i = 0; i < NUM_CIRCLES; i++) {
			red = circles[i].color[0];
			green = circles[i].color[1];
			blue = circles[i].color[2];
			fill(red, green, blue);

			circle(circles[i].locationX + circles[i].speedX, circles[i].locationY + circles[i].speedY, circles[i].radius);
			circles[i].locationX = circles[i].locationX + circles[i].speedX;
			circles[i].locationY = circles[i].locationY + circles[i].speedY;

			if(circles[i].locationX + circles[i].radius/2 > WIDTH
					|| circles[i].locationX - circles[i].radius/2 < 0) {
				circles[i].speedX *= -1;
			}

			if(circles[i].locationY + circles[i].radius/2 > HEIGHT
					|| circles[i].locationY - circles[i].radius/2 < 0) {
				circles[i].speedY *= -1;
			}

			for(int j = 0; j < NUM_CIRCLES; ++j) {
				if(i != j) {
					distance = (int) Math.sqrt(Math.pow(circles[j].locationX - circles[i].locationX, 2) +
							Math.pow(circles[j].locationY - circles[i].locationY, 2));
					if (distance < circles[j].radius/2 + circles[i].radius/2) {
						circles[i].speedX *= -1;
						circles[i].speedY *= -1;
					}
				}

			}
//			System.out.println(circles[i].getLocation()[0]);
		}
	}


	public static void main(String[] args) {
		// TODO Auto-generated method stub
		PApplet.main(new String[] {CIS112Demo.MainNoFrame01.class.getName()});

	}
}


```