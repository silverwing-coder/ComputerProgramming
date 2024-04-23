<h6>ver. Apr-2024</h6>
<h3>CIS 112 Demo - Processiong on Eclipse Setup </h3>

---

<h4>No outer frame: </h4>

<ol>
    <li>Download library *.jar files</li> 
    <li>Link to libraries to the project: Select project --> Properties --> Java build path --> Classpath --> Add JARs --> select *.jar files downloaded 
<br><br>    <a href="https://github.com/silverwing-coder/ComputerProgramming/tree/master/CIS112%24Programming-2(Java)/ProcessingLibries">processing libraries for CIS-112 Demo</a>
</ol>

---

<h4>Templete Codes </h4>

```java

import processing.core.PApplet;

public class MainFrame02 extends PApplet{

	/* initialize graphic environments */
	public void settings() {
		size(600, 400);
	}

	/* loop drawing images on canvas */
	public void draw() {
		background(100);
	}


	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/* call the main() method in PApplet with the current */
		PApplet.main(new String[] {MainFrame02.class.getName()});

	}
}




```
