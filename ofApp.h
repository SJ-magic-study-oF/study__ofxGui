/************************************************************
url
	http://yoppa.org/ma2_14/5899.html
	
		addon
			ofxGui
			ofxXmlSettings
			
		parts
			ofxIntSlider : 整数型 (int) のスライダー
			ofxFloatSlider : 浮動小数点型 (float) のスライダー
			ofxVec2Slider : 2次元ベクトルのスライダー
			ofxColorSlider : カラー生成スライダー
			ofxButton : ボタン
			ofxToggle : トグルスイッチ
			ofxLabel : ラベル (テキスト表示)
			ofxPanel : GUIの外枠
			
		ofxGuiではパラメータを変更した後に特定の処理をする場合、イベントリスナーを設定するという方法で変更するようにしています。
************************************************************/

#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{
	private:
		ofxPanel gui;
		ofxFloatSlider radius;
		ofxColorSlider color;
		ofxVec2Slider position;
		ofxVec3Slider vec3D;
		ofxButton button;
		ofxToggle toggle;
		ofxLabel label;
		
		bool b_disp;
		
		void testButton_released();
		
		
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
