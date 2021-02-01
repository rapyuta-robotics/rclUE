#ifndef _H_D9AC74956EA18FC21C47A0A89BB78B92_UInt32_DCPS_H_
#define _H_D9AC74956EA18FC21C47A0A89BB78B92_UInt32_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "UInt32_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class UInt32_TypeSupportInterface;

            typedef UInt32_TypeSupportInterface * UInt32_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < UInt32_TypeSupportInterface> UInt32_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < UInt32_TypeSupportInterface> UInt32_TypeSupportInterface_out;


            class UInt32_DataWriter;

            typedef UInt32_DataWriter * UInt32_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < UInt32_DataWriter> UInt32_DataWriter_var;
            typedef DDS_DCPSInterface_out < UInt32_DataWriter> UInt32_DataWriter_out;


            class UInt32_DataReader;

            typedef UInt32_DataReader * UInt32_DataReader_ptr;
            typedef DDS_DCPSInterface_var < UInt32_DataReader> UInt32_DataReader_var;
            typedef DDS_DCPSInterface_out < UInt32_DataReader> UInt32_DataReader_out;


            class UInt32_DataReaderView;

            typedef UInt32_DataReaderView * UInt32_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < UInt32_DataReaderView> UInt32_DataReaderView_var;
            typedef DDS_DCPSInterface_out < UInt32_DataReaderView> UInt32_DataReaderView_out;

            struct UInt32_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < UInt32_, struct UInt32_Seq_uniq_> UInt32_Seq;
            typedef DDS_DCPSSequence_var < UInt32_Seq> UInt32_Seq_var;
            typedef DDS_DCPSSequence_out < UInt32_Seq> UInt32_Seq_out;

            class  UInt32_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef UInt32_TypeSupportInterface_ptr _ptr_type;
                typedef UInt32_TypeSupportInterface_var _var_type;

                static UInt32_TypeSupportInterface_ptr _duplicate (UInt32_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt32_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static UInt32_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt32_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt32_TypeSupportInterface_ptr _this () { return this; }


            protected:
                UInt32_TypeSupportInterface () {};
                ~UInt32_TypeSupportInterface () {};
            private:
                UInt32_TypeSupportInterface (const UInt32_TypeSupportInterface &);
                UInt32_TypeSupportInterface & operator = (const UInt32_TypeSupportInterface &);
            };

            class  UInt32_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef UInt32_DataWriter_ptr _ptr_type;
                typedef UInt32_DataWriter_var _var_type;

                static UInt32_DataWriter_ptr _duplicate (UInt32_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt32_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static UInt32_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt32_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt32_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const UInt32_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const UInt32_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const UInt32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const UInt32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const UInt32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const UInt32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const UInt32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const UInt32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const UInt32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const UInt32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (UInt32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt32_& instance_data) = 0;

            protected:
                UInt32_DataWriter () {};
                ~UInt32_DataWriter () {};
            private:
                UInt32_DataWriter (const UInt32_DataWriter &);
                UInt32_DataWriter & operator = (const UInt32_DataWriter &);
            };

            class  UInt32_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef UInt32_DataReader_ptr _ptr_type;
                typedef UInt32_DataReader_var _var_type;

                static UInt32_DataReader_ptr _duplicate (UInt32_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt32_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static UInt32_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt32_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt32_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt32_& instance) = 0;

            protected:
                UInt32_DataReader () {};
                ~UInt32_DataReader () {};
            private:
                UInt32_DataReader (const UInt32_DataReader &);
                UInt32_DataReader & operator = (const UInt32_DataReader &);
            };

            class  UInt32_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef UInt32_DataReaderView_ptr _ptr_type;
                typedef UInt32_DataReaderView_var _var_type;

                static UInt32_DataReaderView_ptr _duplicate (UInt32_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt32_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static UInt32_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt32_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt32_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt32_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt32_& instance) = 0;

            protected:
                UInt32_DataReaderView () {};
                ~UInt32_DataReaderView () {};
            private:
                UInt32_DataReaderView (const UInt32_DataReaderView &);
                UInt32_DataReaderView & operator = (const UInt32_DataReaderView &);
            };
        }

    }

}

#endif
