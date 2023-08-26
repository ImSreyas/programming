
import java.applet.*;
import java.awt.*;
// <applet code='applet' width=500 height=500></applet>
public class applet extends Applet{
    public void paint(Graphics g){
        setBackground(Color.white);
        g.setColor(Color.yellow);
        g.fillOval(100,100,300,300);
        g.setColor(Color.black);
        g.fillOval(150, 180, 100,100);
        g.fillOval(300, 180, 100, 100);
        g.fillArc(210, 250, 120, 120, 170, 180);
        g.setColor(Color.pink);
        g.fillOval(230, 330, 70, 30);
    }
}
