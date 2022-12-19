import QtQuick 2.0
import QtQuick.Window 2.0

Item {
    id: root
    width: 640
    height: 480
    visible: true

    Rectangle {
        x:50; y:50
        width: root.width/4; height: root.height/4
        color: "green"

        Text {
            anchors { bottom: parent.bottom; horizontalCenter: parent.horizontalCenter; bottomMargin: 20 }
            text: "Some text"
        }
    }

}
