std::vector<std::string> domainType(std::vector<std::string> domains) {
std::vector<std::string> result;
    int domain,test;
for(int i=0;i<domains.size();i++)
{
    
    while((test=domains[i].find("."))!=-1)
    {
        std::cout<<domains[i];
        domains[i]=domains[i].substr(test+1);

    }
    domain=domains[i].find("org");
     if (domain!=-1 &&test==-1)
    {
        result.push_back("organization");
    }
     domain=domains[i].find("com");
      if (domain!=-1&&test==-1)
    {
        result.push_back("commercial");
    }
     domain=domains[i].find("info");
      if (domain!=-1&&test==-1 )
    {
        result.push_back("information");
    }
     domain=domains[i].find("net");
      if (domain!=-1&&test==-1 )
    {
        result.push_back("network");
    }
    
}
return result;
}
