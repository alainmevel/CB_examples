UTF8b#      TNI Sos grafcet   �   

      ��'g�H3�<H��#��                            	                                         spindle                            wIF((RE acknowledgePB)) THEN	rotationFault := 0;END_IF;IF (X11 AND equipmentFault) THEN	rotationFault := 1;END_IF;                                 :    
      w   classPropertyIdentifier      $efe67f35-7746-4c41-87ee-86d6ccbf6b60                    
      w   instanceNamingPatternProperty      <CLASS_PATTERN>                    
      w   classPropertyName      PROCESS                    
      w   plcLanguageByPLCList     l<?xml version="1.0" encoding="ISO-8859-1"?><!-- Generator: ControlBuild --><PLCExportInformations>	<PLCInfo PLC="PREMIUM UNITY" Language="graf">	</PLCInfo>	<PLCInfo PLC="PREMIUM PL7" Language="st">	</PLCInfo>	<PLCInfo PLC="API Siemens S7-300" Language="st">	</PLCInfo>	<PLCInfo PLC="API Siemens S7-400" Language="st">	</PLCInfo></PLCExportInformations>                    
      w   SY                             
      w   Herited      false                    
      w   commentPatternProperty      <CLASS_PATTERN>                    
   	   w   NU                             

   
   w   Herited      false                    
         G1                          
             ~   b   �   �               
                  @   @    
            ��������   f      �  �              
             �  }   �  �                  #NOT rotation OR (rotationFault > 0)   Stop rotation request  *         :                                
                   !   �  L              
             ~     �  L                  
contactor;   contactor excitation   �   @   �   D    
            !          �   �              
             �   �   �   �               
   !rotation AND (rotationFault = 0)    Rotation request         �   3                                
                   !   �   �              
      }#��z��Ek�����NB       false               true   true               rotation               
      ;����        
      }�	fTh�G��1���3V       false               true   true               acknowledgePB               
      ;����        
      }\��y2L����B�       false               true   true               equipmentFault               
      ;����        
      }AHL
M�H	��P� }��       false           contactor<SY><NU>   true   true               	contactor               
      ;����        
      }W��Z�NӤ}ca���       false           rotationFault<SY><NU>   true   true               rotationFault               
      >����        
�p��