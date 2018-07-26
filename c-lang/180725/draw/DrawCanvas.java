import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.Graphics;

class DrawCanvas extends JPanel{
    public void paintComponent(Graphics g){
	super.paintComponent(g);
	//g.drawLine(100,100,200,200);//line
	g.drawRect(100,100,50,50);
	g.fillRect(200,100,50,50);
    }
}
