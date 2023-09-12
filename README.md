# Study towards the determination of top-Yukawa coupling from ttbar production using the ATLAS data

author: Cinyu Zhu

email: xy_zhu@zju.edu.cn

This is a repository of my codes for 2023 DESY Summer Student Programme in Zeuthen. My work mainly focus on studying the properties of proxy variables ($m_{bbll}$ for $m_{tt}$, $\cos\theta_{bl}^{minimax}$ for $\cos\theta_t$) for Yt measurement in dilepton channel.

here are the explanation of each folder's contents and intention

### `helper.py`
here are all of my self-made functions  

### `~\dilepMiniNtuple`:
mainly copyed from Supriya Sinha.

In original root file, we have a truth tree and a reco tree. Only parts of the events in truth tree are managed to pass certain criteria and be recorded in the reco tree. The similar events in the truth and reco tree share the same eventNumber.

In this stage of the analysis, we only events which are recorded in both truth and reco level, and we often need to compare the truth and reco info of a same event. 

Our initial approach is to running through the truth tree, and only use the events of which have their match in reco level(as you can seen in the m_tt truth matching part). However, it turned out to be really time consuming, as only 1 event in 17 truth events can have their match in reco level.

Therefore, I use the codes from Supriya to **combine the two trees and save eventNumber-matched events' info in a same entry in another file.** 

to run this part in terminal:

`touch ConnectTrees.C`
`make`
`./ConnectTrees input_root_filename output.root`

and the rest of the analysis are continues from the new `output.root`

