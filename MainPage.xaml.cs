using iOS.Fujitsu;

namespace SampleProject;

public partial class MainPage : ContentPage
{
	int count = 0;

	public MainPage()
	{
		InitializeComponent();
	}

	private void OnCounterClicked(object sender, EventArgs e)
	{
		count++;

		FTP2176000N0_IOSLibrary library = new FTP2176000N0_IOSLibrary();

		SemanticScreenReader.Announce("Crash");
	}
}

