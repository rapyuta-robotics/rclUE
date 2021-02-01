#ifndef _H_DE0B7A2FC6DF31167F737E5C3850E0CA_MultiArrayLayout_DCPS_H_
#define _H_DE0B7A2FC6DF31167F737E5C3850E0CA_MultiArrayLayout_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MultiArrayLayout_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class MultiArrayLayout_TypeSupportInterface;

            typedef MultiArrayLayout_TypeSupportInterface * MultiArrayLayout_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MultiArrayLayout_TypeSupportInterface> MultiArrayLayout_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MultiArrayLayout_TypeSupportInterface> MultiArrayLayout_TypeSupportInterface_out;


            class MultiArrayLayout_DataWriter;

            typedef MultiArrayLayout_DataWriter * MultiArrayLayout_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MultiArrayLayout_DataWriter> MultiArrayLayout_DataWriter_var;
            typedef DDS_DCPSInterface_out < MultiArrayLayout_DataWriter> MultiArrayLayout_DataWriter_out;


            class MultiArrayLayout_DataReader;

            typedef MultiArrayLayout_DataReader * MultiArrayLayout_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MultiArrayLayout_DataReader> MultiArrayLayout_DataReader_var;
            typedef DDS_DCPSInterface_out < MultiArrayLayout_DataReader> MultiArrayLayout_DataReader_out;


            class MultiArrayLayout_DataReaderView;

            typedef MultiArrayLayout_DataReaderView * MultiArrayLayout_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MultiArrayLayout_DataReaderView> MultiArrayLayout_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MultiArrayLayout_DataReaderView> MultiArrayLayout_DataReaderView_out;

            struct MultiArrayLayout_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MultiArrayLayout_, struct MultiArrayLayout_Seq_uniq_> MultiArrayLayout_Seq;
            typedef DDS_DCPSSequence_var < MultiArrayLayout_Seq> MultiArrayLayout_Seq_var;
            typedef DDS_DCPSSequence_out < MultiArrayLayout_Seq> MultiArrayLayout_Seq_out;

            class  MultiArrayLayout_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MultiArrayLayout_TypeSupportInterface_ptr _ptr_type;
                typedef MultiArrayLayout_TypeSupportInterface_var _var_type;

                static MultiArrayLayout_TypeSupportInterface_ptr _duplicate (MultiArrayLayout_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiArrayLayout_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MultiArrayLayout_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiArrayLayout_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiArrayLayout_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MultiArrayLayout_TypeSupportInterface () {};
                ~MultiArrayLayout_TypeSupportInterface () {};
            private:
                MultiArrayLayout_TypeSupportInterface (const MultiArrayLayout_TypeSupportInterface &);
                MultiArrayLayout_TypeSupportInterface & operator = (const MultiArrayLayout_TypeSupportInterface &);
            };

            class  MultiArrayLayout_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MultiArrayLayout_DataWriter_ptr _ptr_type;
                typedef MultiArrayLayout_DataWriter_var _var_type;

                static MultiArrayLayout_DataWriter_ptr _duplicate (MultiArrayLayout_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiArrayLayout_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MultiArrayLayout_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiArrayLayout_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiArrayLayout_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MultiArrayLayout_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MultiArrayLayout_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MultiArrayLayout_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MultiArrayLayout_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MultiArrayLayout_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MultiArrayLayout_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MultiArrayLayout_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MultiArrayLayout_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MultiArrayLayout_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MultiArrayLayout_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MultiArrayLayout_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiArrayLayout_& instance_data) = 0;

            protected:
                MultiArrayLayout_DataWriter () {};
                ~MultiArrayLayout_DataWriter () {};
            private:
                MultiArrayLayout_DataWriter (const MultiArrayLayout_DataWriter &);
                MultiArrayLayout_DataWriter & operator = (const MultiArrayLayout_DataWriter &);
            };

            class  MultiArrayLayout_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MultiArrayLayout_DataReader_ptr _ptr_type;
                typedef MultiArrayLayout_DataReader_var _var_type;

                static MultiArrayLayout_DataReader_ptr _duplicate (MultiArrayLayout_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiArrayLayout_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MultiArrayLayout_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiArrayLayout_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiArrayLayout_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MultiArrayLayout_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MultiArrayLayout_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MultiArrayLayout_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiArrayLayout_& instance) = 0;

            protected:
                MultiArrayLayout_DataReader () {};
                ~MultiArrayLayout_DataReader () {};
            private:
                MultiArrayLayout_DataReader (const MultiArrayLayout_DataReader &);
                MultiArrayLayout_DataReader & operator = (const MultiArrayLayout_DataReader &);
            };

            class  MultiArrayLayout_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MultiArrayLayout_DataReaderView_ptr _ptr_type;
                typedef MultiArrayLayout_DataReaderView_var _var_type;

                static MultiArrayLayout_DataReaderView_ptr _duplicate (MultiArrayLayout_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiArrayLayout_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MultiArrayLayout_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiArrayLayout_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiArrayLayout_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MultiArrayLayout_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MultiArrayLayout_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MultiArrayLayout_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MultiArrayLayout_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiArrayLayout_& instance) = 0;

            protected:
                MultiArrayLayout_DataReaderView () {};
                ~MultiArrayLayout_DataReaderView () {};
            private:
                MultiArrayLayout_DataReaderView (const MultiArrayLayout_DataReaderView &);
                MultiArrayLayout_DataReaderView & operator = (const MultiArrayLayout_DataReaderView &);
            };
        }

    }

}

#endif
