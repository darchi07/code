import javax.swing.JFrame;
import javax.swing.JPanel;


class GameWindow extends JFrame{
    public GameWindow(String title, int width,int height){
	super(title);
	setDefaultCloseOperation(EXIT_ON_CLOSE);//push x 
	setSize(width,height);
	setLocationRelativeTo(null);
	setResizable(false);
    }
}
