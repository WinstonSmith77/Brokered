﻿using System.Diagnostics;
using Windows.UI.Xaml.Controls;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace Client
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
        }

        private void Button_Click(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {
            //Just an exmple of invoking brokered component. 
            Server.BrokeredComponent1 bc = new Server.BrokeredComponent1();
            string brokeredComponentValue = bc.GetValue();
            this.Display.Text = brokeredComponentValue;

            Debug.WriteLine(brokeredComponentValue);
        }
    }
}
