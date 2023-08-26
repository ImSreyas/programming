import java.awt.*;
import java.applet.*;
import java.awt.event.*;
import javax.swing.*;

import javax.swing.JCheckBox;
// <applet code='checkBoxProgram' width=500 height=500></applet>
public class checkBoxProgram extends JApplet implements ItemListener{
    JTextField te;
    JCheckBox first, second;
    public void init(){
        Container c = getContentPane();
        c.setVisible(true);
        c.setSize(500, 500);
        c.setLayout(new FlowLayout());

        first = new JCheckBox("first");
        second = new JCheckBox("second");
        te = new JTextField(20);
        first.addItemListener(this);
        second.addItemListener(this);

        c.add(first);
        c.add(second);
        c.add(te);
    }
    public void itemStateChanged(ItemEvent e){
        te.setText(((JCheckBox) e.getItem()).getText());
    }
}