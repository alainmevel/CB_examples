UTF8b#      TNI Sos grafcet   �   r

      �0X�4O>�n��� O                            	                                         run      ,   .   9   @   G   I      K   M   O   Q   S   U   W   `      e   g   i  xIF(RE acknowledgePB) THEN	movementFault := 0;END_IF;IF((X12 AND (cnt >= fastDescentDuration)  AND NOT downDeceleration )) THEN	movementFault := 1;END_IF;IF((X13 AND (cnt >= slowDescentDuration)  AND NOT downState )) THEN	movementFault := 2;END_IF;IF((X14 AND (cnt >= fastAscentDuration)  AND NOT topDeceleration )) THEN	movementFault := 3;END_IF;IF((X15 AND (cnt >= slowAscentDuration)  AND NOT topState )) THEN	movementFault := 4;END_IF;IF((X12 AND downState  AND NOT downDeceleration )) THEN	movementFault := 5;END_IF;IF((X14 AND topState  AND NOT topDeceleration )) THEN	movementFault := 6;END_IF;IF(((X13 OR X14) AND topState )) THEN	movementFault := 7;END_IF;IF(((X11 OR X13 OR X16 OR X17) AND topDeceleration )) THEN	movementFault := 8;END_IF;IF(((X11 OR X15 OR X16 OR X17) AND downDeceleration )) THEN	movementFault := 9;END_IF;IF(((X11 OR X15 OR X16 OR X17) AND downState )) THEN	movementFault := 10;END_IF;noFaultCond := (clampingFault = 0) AND (motorFault = 0)  AND (rotationFault = 0)  AND (movementFault = 0) ;initialCond := noFaultCond AND ((piece AND (RE unitProd OR batchProd) ) OR emptyProd) ;   jIF((X10 OR RE X12 OR RE X13 OR RE X14 OR RE X15)) THEN	cnt := 0;END_IF;faultyState := NOT noFaultCond;          k   m   o   q                     8   �  	  s  �  +  ~  �    r  �  1   �    g  �    n  �  	  b  �  !         O   K
      w   classPropertyIdentifier      $efe67f35-7746-4c41-87ee-86d6ccbf6b60                    
      w   instanceNamingPatternProperty      <CLASS_PATTERN>                    
      w   classPropertyName      PROCESS                    
      w   plcLanguageByPLCList     W<?xml version="1.0" encoding="ISO-8859-1"?><!-- Generator: ControlBuild_5.30 --><PLCExportInformations>	<PLCInfo PLC="PREMIUM Unity" Language="graf">	</PLCInfo>	<PLCInfo PLC="PREMIUM PL7" Language="st">	</PLCInfo>	<PLCInfo PLC="STEP7" Language="st">	</PLCInfo>	<PLCInfo PLC="L5K" Language="graf">	</PLCInfo></PLCExportInformations>                    
      w   SY                             
      w   Herited      false                    
      w   commentPatternProperty      <CLASS_PATTERN>                    
   	   w   NU                             

   
   w   Herited      false                    
         G1             (   $                                     "   &   *    
             k   @   �   �            +   
   loadingRequest;cycleEnd;   ,Wait for a new cycleRequest for a new piece  -   @   �   G    
            ��������   [      �  _              
             {  W   �  _                  	NOT piece   exit of the work piece   �   (   �   (                                
                   !   �  &              
             k  �   �  &                  cycleEnd;unloadingRequest;   'request for unloading of the work piece  9   @   �   @    
            !          �  �              
             {  �   �  �                  releasingOK   clamping element is open  2       �                                    
                   !   �  |              
             k  <   �  |                  
releasing;   request for work piece release  9   @   �   @    
            !          �                
             {     �                    topState   *spindle stopped AND frame in rest position  i       n                                   
                   !   �  �              
             k  �   �  �                  slowAscent;cnt := cnt + 1;   5slow ascent of the framestop of the spindle rotation  5   @   �   H    
            !          �  a              
             {  Y   �  a                  topDeceleration   +passing in front of the top slowdown sensor  z   #   �   #                                
                   !   �  (              
             k  �   �  (                  %fastAscent;rotation;cnt := cnt + 1;   fast ascent of the frame  3   @   �   L    
            !          �  �              
             {  �   �  �                  	downState   endOfDrilling   �       �                                    
                   !   �  ~               
              k  >   �  ~      !            &slowDescent;rotation;cnt := cnt + 1;   9slow descent of the frame(for drilling of the workpiece)  3   @   �   J    
   !         !          �         "        
   "          {     �        #      !      downDeceleration   ,passing in front of the down slowdown sensor  �       �                                    
   #                !   �  �       $   "    
   $          k  �   �  �      %      #      &fastDescent;rotation;cnt := cnt + 1;   1rotation of the spindlefast descent of the frame  1   B   �   L    
   %         !          �  c       &   $    
   &          {  [   �  c      '      %      
clampingOK   work piece clamped  %   #   ~                                   
   '                !   �  *       (   &    
   (          k   �   �  *      )      '      	clamping;   'request for clamping of the work piece  -   @   �   F    
   )         !          �   �       *   (    
   *          {   �   �   �      +      )   
   initialCond   !cycle request AND piece presence   �   (   �   "                                
   +                !   �   �          *    
   ,   }��<6'JOӗ�%CrJ�>       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               rotationFault   -            
   -   >����        
   .   ~�~`��II����W�l       false                          /   1   3   5   7   	DescentFB
   /   }�W�b�N.�'����K       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       .       	downState   0   .        
   0   ;����        
   1   }7�&y8#Hf��!�E�#       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       .       downDeceleration   2   .        
   2   ;����        
   3   }o�qו�@���'��JF       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       .       topDeceleration   4   .        
   4   ;����        
   5   }�t��B��6!�*�D)       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       .       topState   6   .        
   6   ;����        
   7   }	��A�n�ײv�0       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       .       
motorFault   8   .        
   8   >����        
   9   ~A�pafDg��k�l��       false                          :   <   >   
ClampingFB
   :   }i&mu{KF�QF��q1�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       9       clampingFault   ;   9        
   ;   >����        
   <   }����FL�����V       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       9       releasingOK   =   9        
   =   ;����        
   >   }1mvWnL���E儛C       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       9       
clampingOK   ?   9        
   ?   ;����        
   @   ~��8=O��'v�����       false                          A   C   E   OperatingMode
   A   }M���s>HźP4�~�g       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       @       	emptyProd   B   @        
   B   ;����        
   C   }.�wY�A&��;���X�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       @       unitProd   D   @        
   D   ;����        
   E   }gL&*NI���;��       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       @       	batchProd   F   @        
   F   ;����        
   G   }�_���FB���fOb�s       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               acknowledgePB   H            
   H   ;����        
   I   }�l�@�[AC�!��NE       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               piece   J            
   J   ;����        
   K   }�D�i�G��C6q��=       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               rotation   L            
   L   ;����        
   M   }�.�Q��A����f��z       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               cycleEnd   N            
   N   ;����        
   O   }C߮�#B����r�AX       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               movementFault   P            
   P   >����        
   Q   }�Qڀ�MN����|�*�L       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               loadingRequest   R            
   R   ;����        
   S   }ԙ�;��E�Ot���       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               unloadingRequest   T            
   T   ;����        
   U   }A:>fr�OǨ�.�>J-�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               faultyState   V            
   V   ;����        
   W   ~��R�MJ��P`ǎп9       false                          X   Z   \   ^   DescentRequests
   X   }��:��H0�U�n�t�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       W       
slowAscent   Y   W        
   Y   ;����        
   Z   }�ְ-�DC�"Ji�4�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       W       
fastAscent   [   W        
   [   ;����        
   \   }s-̬�%@ױ�U�A�p8       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       W       slowDescent   ]   W        
   ]   ;����        
   ^   }�x;��lM,�|���]�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       W       fastDescent   _   W        
   _   ;����        
   `   ~����Dы춬�Y4       false                          a   c   ClampingRequests
   a   }�_Y1fI?��}���       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       `       	releasing   b   `        
   b   ;����        
   c   }�h�EMB ���[�u#       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       `       clamping   d   `        
   d   ;����        
   e   }W��NZ������       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               initialCond   f            
   f   ;����        
   g   }\?�N qE���`%����       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               noFaultCond   h            
   h   ;����        
   i   }�Nk��M��˷}��)       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               cnt   j            
   j   >����        
   k   }V���{D5��Z���\       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               fastDescentDuration   l            
   l   >����       d
   m   }<e�;�J������-ِ       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               slowDescentDuration   n            
   n   >����       2
   o   }ǀ��!9DࢼC����       false           fastAscentDuration<SY><NU>   true   true               fastAscentDuration   p            
   p   >����       d
   q   }�A��;iD*��qPYe�       false           slowAscentDuration<SY><NU>   true   true               slowAscentDuration   r            
   r   >����       2
��X