#ifndef HistoProviderDQM_H
#define HistoProviderDQM_H


class DQMStore;
class MonitorElement;

#include <string>

class HistoProviderDQM  {
 public:
  HistoProviderDQM(const std::string& prefix, const std::string& label);
  virtual ~HistoProviderDQM(){}
  void show();

  virtual MonitorElement* book1D       (const std::string &name,
                      const std::string &title,
                      const int& nchX, const double& lowX, const double& highX) ;
  
  virtual MonitorElement* book1D       (const std::string &name,
                      const std::string &title,
                      const int& nchX, float *xbinsize) ;

  virtual MonitorElement* book2D       (const std::string &name,
                      const std::string &title,
                      const int& nchX, const double& lowX, const double& highX,
                      const int& nchY, const double& lowY, const double& highY) ;
  
  virtual MonitorElement* book2D       (const std::string &name,
                      const std::string &title,
                      const int& nchX, float *xbinsize,
                      const int& nchY, float *ybinsize) ;

  virtual MonitorElement* bookProfile       (const std::string &name,
                      const std::string &title,
                      int nchX, double lowX, double highX,
                      int nchY, double lowY, double highY) ;

  void setDir(const std::string&);

  virtual MonitorElement * access(const std::string &name);

 private:
  DQMStore * dqmStore_;
  std::string label_;
};                                                                                                                                                                           
#endif
