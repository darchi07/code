import javax.swing.JFrame;

class Test{
    public static void main(String[] args){
	new sample_window("TestWindow",400, 300);
	return;
    }
}

class sample_window extends JFrame{
    public sample_window(String title, int width, int height){
	super(title);
	setDefaultCloseOperation(EXIT_ON_CLOSE);// close button 
	setSize(width,height);
	setLocationRelativeTo(null);
	setResizable(false);
	setVisible(true);
    }
}
