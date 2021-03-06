#include "QvtkDicomViewer.h"
#include <QtWidgets/QApplication>

#include <vtkAutoInit.h>
VTK_MODULE_INIT(vtkRenderingOpenGL2);
VTK_MODULE_INIT(vtkInteractionStyle);
#include<vtkSmartPointer.h>  
#include<vtkSphereSource.h>  
#include<vtkPolyDataMapper.h>  
#include<vtkActor.h>  
#include<vtkImageViewer.h>  
#include<vtkRenderWindowInteractor.h>  
#include<vtkInteractorStyleImage.h>  
#include<vtkJPEGReader.h>  
#include<vtkRenderer.h>  
#include<QVTKWidget.h> 

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QvtkDicomViewer w;
	w.show();
	return a.exec();
}
