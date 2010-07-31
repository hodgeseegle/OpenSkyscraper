#ifndef OSS_APPLICATION_H
#define OSS_APPLICATION_H

#include "../general.h"
#include "../base/singleton.h"

namespace OSS {
	class Application : public Singleton<Application, Object> {
	private:
		bool keepRunning;
		
	public:
		//Initialization
		Application();
		~Application();
		
		//Life cycle
		void prepare();
		void run();
		void cleanUp();
		
		//Shutdown
		void quit();
		
		//Notifications (useful when subclassing Application)
		virtual void onPrepare() {}
		virtual void onCleanUp() {}
	};
}

#endif