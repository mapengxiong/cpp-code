{
//=========Macro generated from canvas: MyC/Test canvas
//=========  (Fri Jan  9 20:38:56 2015) by ROOT version5.34/23
   TCanvas *MyC = new TCanvas("MyC", "Test canvas",56,52,700,500);
   gStyle->SetOptStat(0);
   MyC->Range(0,0,1,1);
   MyC->SetFillColor(0);
   MyC->SetBorderMode(0);
   MyC->SetBorderSize(2);
   MyC->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MyC_1
   TPad *MyC_1 = new TPad("MyC_1", "MyC_1",0.01,0.51,0.49,0.99);
   MyC_1->Draw();
   MyC_1->cd();
   MyC_1->Range(0,0,1,1);
   MyC_1->SetFillColor(0);
   MyC_1->SetBorderMode(0);
   MyC_1->SetBorderSize(2);
   MyC_1->SetFrameBorderMode(0);
   MyC_1->Modified();
   MyC->cd();
  
// ------------>Primitives in pad: MyC_2
   MyC_2 = new TPad("MyC_2", "MyC_2",0.51,0.51,0.99,0.99);
   MyC_2->Draw();
   MyC_2->cd();
   MyC_2->Range(-1.25,-0.4455224,11.25,1.23112);
   MyC_2->SetFillColor(0);
   MyC_2->SetBorderMode(0);
   MyC_2->SetBorderSize(2);
   MyC_2->SetFrameBorderMode(0);
   MyC_2->SetFrameBorderMode(0);
   
   TF1 *func1 = new TF1("func1","sin(x)/x",0,10);
   func1->SetFillColor(19);
   func1->SetFillStyle(0);
   func1->SetLineColor(2);
   func1->SetLineWidth(2);
   func1->GetXaxis()->SetLabelFont(42);
   func1->GetXaxis()->SetLabelSize(0.035);
   func1->GetXaxis()->SetTitleSize(0.035);
   func1->GetXaxis()->SetTitleFont(42);
   func1->GetYaxis()->SetLabelFont(42);
   func1->GetYaxis()->SetLabelSize(0.035);
   func1->GetYaxis()->SetTitleSize(0.035);
   func1->GetYaxis()->SetTitleFont(42);
   func1->Draw("");
   
   TPaveText *pt = new TPaveText(0.01,0.9317089,0.1467385,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   TText *text = pt->AddText("sin(x)/x");
   pt->Draw();
   MyC_2->Modified();
   MyC->cd();
  
// ------------>Primitives in pad: MyC_3
   MyC_3 = new TPad("MyC_3", "MyC_3",0.01,0.01,0.49,0.49);
   MyC_3->Draw();
   MyC_3->cd();
   MyC_3->Range(0,0,1,1);
   MyC_3->SetFillColor(0);
   MyC_3->SetBorderMode(0);
   MyC_3->SetBorderSize(2);
   MyC_3->SetFrameBorderMode(0);
   MyC_3->Modified();
   MyC->cd();
  
// ------------>Primitives in pad: MyC_4
   MyC_4 = new TPad("MyC_4", "MyC_4",0.51,0.01,0.99,0.49);
   MyC_4->Draw();
   MyC_4->cd();
   MyC_4->Range(0,0,1,1);
   MyC_4->SetFillColor(0);
   MyC_4->SetBorderMode(0);
   MyC_4->SetBorderSize(2);
   MyC_4->SetFrameBorderMode(0);
   MyC_4->Modified();
   MyC->cd();
   MyC->Modified();
   MyC->cd();
   MyC->SetSelected(MyC);
}
