import javax.swing.JFrame;
import javax.swing.JPanel;

public class Test{
    public static void main(String[] args){
	GameWindow gw = new GameWindow("�ƥ��ȥ�����ɥ�",400,300);
	gw.add(new DrawCanvas());
	gw.setVisible(true);
    }
}
