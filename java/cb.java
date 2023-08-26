import java.awt.*;
import java.applet.*;
import java.awt.event.*;
import javax.swing.*;
// <applet code='cb' width=500 height=500></applet>

public class cb extends JApplet implements ItemListener{
    JLabel label;   
    ImageIcon a, b, c, d;
    public void init(){
        Container cp = getContentPane();
        cp.setLayout(new FlowLayout());
        cp.setSize(500, 500);
        cp.setVisible(true);

        JComboBox jc = new JComboBox();
        jc.addItem("a");
        jc.addItem("b");
        jc.addItem("c");
        jc.addItem("d");

        jc.addItemListener(this);
        cp.add(jc);

        label = new JLabel(new ImageIcon("a.png"));
        cp.add(label);
    }
    public void itemStateChanged(ItemEvent e){
        String s = (String) e.getItem();
        label.setIcon(new ImageIcon(s + ".png"));
    }
}
